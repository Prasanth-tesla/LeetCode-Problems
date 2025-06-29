class Solution(object):
    def flipAndInvertImage(self, image):
        if not 1<=len(image)<=20 and len(image)==len(image[0]):
            return 0
        image=[i[::-1] for i in image]
        image=[[1-x for x in r]for r in image]
        return image
        
