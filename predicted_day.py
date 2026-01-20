def dayAfterNDays(day, N):
    days = ["Monday", "Tuesday", "Wednesday",
            "Thursday", "Friday", "Saturday", "Sunday"]

    index = days.index(day)
    new_index = (index + N) % 7

    return days[new_index]
