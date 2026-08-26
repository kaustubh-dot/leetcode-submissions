class Solution(object):
    def capitalizeTitle(self, title):
        title=title.lower()
        words=title.split()
        for i in range(len(words)):
            if len(words[i])>2:
                words[i]=words[i][0].upper()+words[i][1:]
        return " ".join(words)

        """
        :type title: str
        :rtype: str
        """
        