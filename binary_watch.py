from typing import List

class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        result = []
        
        # Loop through all possible hours
        for hour in range(12):
            
            # Loop through all possible minutes
            for minute in range(60):
                
                # Count total number of 1s in hour and minute
                if bin(hour).count('1') + bin(minute).count('1') == turnedOn:
                    
                    # Format time properly
                    time = f"{hour}:{minute:02d}"
                    
                    result.append(time)
        
        return result
