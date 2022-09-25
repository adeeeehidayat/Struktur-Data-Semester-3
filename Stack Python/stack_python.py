# Class stack
class Stack:
    def __init__(self):
        self.items = []
    # Memeriksa apakah stack kosong
    def isEmpty(self):
        return self.items == []
    # Menambah objek ke dalam tumpukan stack
    def push(self, item):
        self.items.append(item)
    # Mengambil data dari tumpukan stack
    def pop(self):
        return self.items.pop()
    # Menampilkan objek terakhir di tumpukan stack
    def peek(self):
        return self.items[len(self.items)-1]
    # Mehitung panjang stack
    def size(self):
        return len(self.items)
   
    # Menu 
    def mainmenu(self):
        pilih = "y"
        while (pilih == "y"):
            print("================================")
            print("|| Menu Aplikasi Stack Python ||")
            print("================================")
            print("1. Push objek")
            print("2. Pop objek")
            print("3. Cek Empty Stack (True/Flase)")
            print("4. Tampilkan objek terakhir")
            print("5. Panjang stack")
            print("================================")
            pilihan=str(input(("Masukkan pilihan anda(1-5) : ")))
            if(pilihan=="1"):
                obj = str(input("Masukan objek yang ingin ditambahkan: "))
                self.push(obj)
                print("Objek "+obj+" berhasil ditambahkan")
                x = input("")
            elif(pilihan=="2"):
                print("Objek "+self.pop()+" berhasil dihapus")
                x = input("")
            elif(pilihan=="3"):
                print("Cek apakah stack kosong/tidak : "+str(self.isEmpty()))
                x = input("")
            elif(pilihan=="4"):
                print("Objek terakhir pada tumpukan stack adalah : "+self.peek())
                x = input("")
            elif(pilihan=="5"):
                print("Panjang tumpukan stack adalah : "+str(self.size()))
                x = input("")
            else:
                pilih="n"  
 
if __name__ == "__main__":
    s=Stack()
    s.mainmenu()