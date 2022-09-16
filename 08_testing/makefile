NUMBERS = 1 2 3 4 5 6 7 8 9 10 
i = 1
all: a b c d ans 
a:
	@exec ./isPrime-broken1 $(i) > a.txt	
b:
	@exec ./isPrime-broken2 $(i) > b.txt	
c:
	@exec ./isPrime-broken3 $(i) > c.txt	
d:
	@exec ./isPrime-broken4 $(i) > d.txt	
ans: 
#!/usr/bin/bash
	for number in $(NUMBERS); do \
		echo 1 ; \
		echo $$number ; \
		exec ./isPrime-broken1 $$number > ./a.txt ; \
		# exec ./isPrime-broken2 $$number > b.txt ; \
		# exec ./isPrime-broken3 $$number > c.txt ; \
		# exec ./isPrime-broken4 $$number > d.txt ; \
		# exec ./isPrime-correct $$number > ans.txt ; \
		# exec diff a.txt ans.txt ; \
		# exec diff b.txt ans.txt ; \
	 	# exec diff c.txt ans.txt ; \
	 	# exec diff d.txt ans.txt ; \
	done 