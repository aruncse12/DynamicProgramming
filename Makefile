.PHONY: clean All

All:
	@echo "----------Building project:[ FibonacciTabulation - Debug ]----------"
	@cd "FibonacciTabulation" && "$(MAKE)" -f  "FibonacciTabulation.mk"
clean:
	@echo "----------Cleaning project:[ FibonacciTabulation - Debug ]----------"
	@cd "FibonacciTabulation" && "$(MAKE)" -f  "FibonacciTabulation.mk" clean
