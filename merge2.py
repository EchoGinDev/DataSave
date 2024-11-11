def partition(data, start, end):
    # Ambil elemen terakhir sebagai pivot
    pivot = data[end]
    left = start
    right = end - 1

    # Lakukan pengulangan hingga left melampaui right
    while left <= right:
        # Geser left ke kanan hingga menemukan elemen yang lebih besar atau sama dengan pivot
        while data[left] < pivot:
            left += 1
        # Geser right ke kiri hingga menemukan elemen yang lebih kecil atau sama dengan pivot
        while data[right] > pivot:
            right -= 1
        # Tukar elemen jika left <= right
        if left <= right:
            data[left], data[right] = data[right], data[left]
            left += 1
            right -= 1

    # Tukar posisi data pada indeks left dan end
    data[left], data[end] = data[end], data[left]
    return left
