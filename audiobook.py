import pyttsx3
import PyPDF2
Book = open('op.pdf', 'rb')
pdfReader = PyPDF2.PdfFileReader(Book)
pages = pdfReader.numPages
print(pages)
speaker = pyttsx3.init()
for num in range(4, pages):
    page = pdfReader.getPage(4)
    text = page.extractText()
    speaker.say(text)
    speaker.runAndWait()