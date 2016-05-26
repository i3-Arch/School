main = do 
		putStrLn "Hello, what's your name?"
		name <- getLine
		putStrLn ("Hey " ++ name ++ ", nice to meet you!")
