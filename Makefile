.PHONY: clean All

All:
	@echo "----------Building project:[ LongestIncreasingSubsequence - Debug ]----------"
	@cd "LongestIncreasingSubsequence" && "$(MAKE)" -f  "LongestIncreasingSubsequence.mk"
clean:
	@echo "----------Cleaning project:[ LongestIncreasingSubsequence - Debug ]----------"
	@cd "LongestIncreasingSubsequence" && "$(MAKE)" -f  "LongestIncreasingSubsequence.mk" clean
