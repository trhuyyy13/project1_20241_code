from collections import defaultdict

# Hàm đệ quy để đếm tổng số con cháu của một người
def count_descendants(tree, name):
    # Nếu người này không có con cháu, trả về 0
    if name not in tree:
        return 0
    total_descendants = 0
    # Duyệt qua tất cả các con của người này
    for child in tree[name]:
        # Cộng 1 cho mỗi người con và đệ quy để tính số con cháu của từng người con
        total_descendants += 1 + count_descendants(tree, child)
    return total_descendants

# Hàm đệ quy để tính số thế hệ con cháu từ một người
def count_generations(tree, name):
    # Nếu người này không có con cháu, trả về 0 (nghĩa là không có thế hệ sau)
    if name not in tree:
        return 0
    max_generation = 0
    # Duyệt qua tất cả các con của người này
    for child in tree[name]:
        # Tính thế hệ sâu nhất của mỗi người con và chọn giá trị lớn nhất
        max_generation = max(max_generation, 1 + count_generations(tree, child))
    return max_generation

# Hàm chính để xử lý đầu vào và thực thi các truy vấn
def main():
    # Sử dụng defaultdict(list) để lưu trữ cây gia đình với khóa là cha và giá trị là danh sách các con
    family_tree = defaultdict(list)
    
    # Khối đầu tiên: nhập dữ liệu về các mối quan hệ cha-con
    while True:
        line = input().strip()
        if line == "***":
            break
        # Tách chuỗi để lấy tên của con và cha
        child, parent = line.split()
        # Lưu vào cây gia đình, với cha là khóa và con là một phần tử trong danh sách con
        family_tree[parent].append(child)
    
    # Khối thứ hai: nhập các truy vấn về cây gia đình
    while True:
        line = input().strip()
        if line == "***":
            break
        # Tách chuỗi để lấy lệnh (descendants hoặc generation) và tên người cần truy vấn
        cmd, name = line.split()
        
        # Nếu lệnh là 'descendants', in ra số lượng con cháu
        if cmd == "descendants":
            print(count_descendants(family_tree, name))
        # Nếu lệnh là 'generation', in ra số thế hệ con cháu
        elif cmd == "generation":
            print(count_generations(family_tree, name))

# Ví dụ đầu vào:
# Peter Newman
# Michael Thomas
# John David
# Paul Mark
# Stephan Mark
# Pierre Thomas
# Mark Newman
# Bill David
# David Newman
# Thomas Mark
# ***
# descendants Newman
# descendants Mark
# descendants David
# generation Mark
# ***

# Chạy chương trình chính
if __name__ == "__main__":
    main()
