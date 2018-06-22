.PHONY: clean All

All:
	@echo "----------Building project:[ MinimumJump - Debug ]----------"
	@cd "MinimumJump" && "$(MAKE)" -f  "MinimumJump.mk"
clean:
	@echo "----------Cleaning project:[ MinimumJump - Debug ]----------"
	@cd "MinimumJump" && "$(MAKE)" -f  "MinimumJump.mk" clean
