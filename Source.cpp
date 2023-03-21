#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>

int main()
{
    char* outText;

    tesseract::TessBaseAPI* api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init("D:/OCR/Code/Text extract using OCR 3/tessdata", "eng")) {
        fprintf(stderr, "Could not initialize tesseract123.\n");
        exit(1);
    }

    // Open input image with leptonica library
    Pix* image = pixRead("D:/OCR/Directory_bounding/test_OCR_Img/MicrosoftTeams-image (4).png");
    //Pix* image = pixRead("C:/Users/Tanmay Sankpal/Desktop/test_OCR_Img/sample images/sample images/segment_image(48).png");
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("OCR output:\n%s", outText);

    // Destroy used object and release memory
    api->End();
    delete api;
    delete[] outText;
    pixDestroy(&image);

    return 0;
}