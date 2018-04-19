.PHONY: clean All

All:
	@echo "----------Building project:[ RodCutting - Debug ]----------"
	@cd "RodCutting" && "$(MAKE)" -f  "RodCutting.mk"
clean:
	@echo "----------Cleaning project:[ RodCutting - Debug ]----------"
	@cd "RodCutting" && "$(MAKE)" -f  "RodCutting.mk" clean
