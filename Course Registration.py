class CourseRegistrationSystem:
    def __init__(self):
        self.courses = {}  # Dictionary to store course information
        self.students = {}  # Dictionary to store student information

    def create_course(self, courseId, name, credits):
        if courseId in self.courses or name in [course["name"] for course in self.courses.values()]:
            return "false"
        self.courses[courseId] = {"name": name, "credits": int(credits)}
        return "true"

    def register_for_course(self, studentId, courseId):
        if studentId in self.students:
            # Check if the student has already registered for this course
            if courseId in self.students[studentId]["courses"]:
                return "false"

            # Check if registering for this course would exceed the 24-credit limit
            total_credits = sum([self.courses[c]["credits"] for c in self.students[studentId]["courses"]])
            if total_credits + self.courses[courseId]["credits"] > 24:
                return "false"

            # Register the student for the course
            self.students[studentId]["courses"].append(courseId)
            return "true"
        else:
            # If the student doesn't exist, create a new student and register for the course
            self.students[studentId] = {"courses": [courseId]}
            return "true"
