#!/bin/bash
# By: t60r
#
# This script will set up a simple stateful firewall using iptabels
# See https://wiki.archlinux.org/index.php/simple_stateful_firewall for more information

iptables -N TCP
iptables -N UDP
iptables -P FORWARD DROP
iptables -P OUTPUT ACCEPT
iptables -P INPUT DROP
iptables -A INPUT -m conntrack --ctstate RELATED,ESTABLISHED -j ACCEPT
iptables -A INPUT -i lo -j ACCEPT
iptables -A INPUT -m conntrack --ctstate INVALID -j DROP
iptables -A INPUT -p icmp --icmp-type 8 -m conntrack --ctstate NEW -j ACCEPT
iptables -A INPUT -p udp -m conntrack --ctstate NEW -j UDP
iptables -A INPUT -p tcp --syn -m conntrack --ctstate NEW -j TCP
iptables -A INPUT -p udp -j REJECT --reject-with icmp-port-unreachable
iptables -A INPUT -p tcp -j REJECT --reject-with tcp-rst
iptables -A INPUT -j REJECT --reject-with icmp-proto-unreachable


iptables -A TCP -p tcp --dport 80 -j ACCEPT
iptables -A TCP -p tcp --dport 443 -j ACCEPT
iptables -A INPUT -p icmp --icmp-type echo-request -m limit --limit 30/min --limit-burst 8 -j ACCEPT
iptables -A INPUT -p icmp --icmp-type echo-request -j DROP
iptables -A INPUT -p icmp --icmp-type echo-request -m recent --name ping_limiter --set
iptables -A INPUT -p icmp --icmp-type echo-request -m recent --name ping_limiter --update --hitcount 6 --seconds 4 -j DROP
iptables -A INPUT -p icmp --icmp-type echo-request -j ACCEPT
iptables -D INPUT -p icmp --icmp-type 8 -m conntrack --ctstate NEW -j ACCEPT
iptables -I TCP -p tcp -m recent --update --seconds 60 --name TCP-PORTSCAN -j REJECT --reject-with tcp-rst
iptables -D INPUT -p tcp -j REJECT --reject-with tcp-rst
iptables -A INPUT -p tcp -m recent --set --name TCP-PORTSCAN -j REJECT --reject-with tcp-rst
iptables -I UDP -p udp -m recent --update --seconds 60 --name UDP-PORTSCAN -j REJECT --reject-with icmp-port-unreachable
iptables -D INPUT -p udp -j REJECT --reject-with icmp-port-unreachable
iptables -A INPUT -p udp -m recent --set --name UDP-PORTSCAN -j REJECT --reject-with icmp-port-unreachable
iptables -D INPUT -j REJECT --reject-with icmp-proto-unreachable
iptables -A INPUT -j REJECT --reject-with icmp-proto-unreachable
iptables-save > /etc/iptables/iptables.rules

#END

