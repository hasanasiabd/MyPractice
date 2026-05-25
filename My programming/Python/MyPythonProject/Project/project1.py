

from PyPDF2 import PdfMerger

AllPDF = ["Spoken English Day-01.pdf","Spoken English Day-02.pdf"]

OurMerger = PdfMerger()
for NewPDF in AllPDF:
    OurMerger.append(NewPDF)

OurMerger.write("SE Day-01 & 02.pdf")
OurMerger.close()

# import os
# os.remove("SE Day-01 & 02.pdf")

a = PdfMerger()
for all in AllPDF:
    a.append(all)

a.write("SE Day-01 & 02.pdf")
a.close()

import PyPDF2

# তোর PDF ফাইলের নাম
input_file = "SE Day-01 & 02.pdf"
output_file = "SE Day-01 & 02 (Modified).pdf"

# কোন পেজ বাদ দিবি? ধর, তুই 8,10 নম্বর পেজ মুছতে চাস
page_to_remove = [8,9]  # মনে রাখ, index 0 থেকে শুরু হয়

## [একটি পেজ বাদ দেওয়ার জন্য।]
# page_to_remove = 2


# পুরানো PDF ওপেন
with open(input_file, 'rb') as pdf_file:
    reader = PyPDF2.PdfReader(pdf_file)
    writer = PyPDF2.PdfWriter()                ## [একটি পেজ বাদ দেওয়ার জন্য।]
             # পুরানো PDF ওপেন
             # with open(input_file, 'rb') as pdf_file:
             #     reader = PyPDF2.PdfReader(pdf_file)
             #     writer = PyPDF2.PdfWriter()
    for i in range(len(reader.pages)):
        if i not in page_to_remove:
            writer.add_page(reader.pages[i])   ## [একটি পেজ বাদ দেওয়ার জন্য।]
             #     for i in range(len(reader.pages)):
             #         if i != page_to_remove:
             #             writer.add_page(reader.pages[i])
    # নতুন PDF লিখে ফেল
    with open(output_file, 'wb') as output_pdf:
        writer.write(output_pdf)

print("🎉 কাজ শেষ! নতুন PDF: ", output_file)

# import os
# os.remove(input_file)


