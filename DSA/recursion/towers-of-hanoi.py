def towers_of_hanoi(disks, src, dest, aux):
    """
    tower_of_hanoi problem

    :param disks: number of disks
    :param src: start needle
    :param dest: destination needle
    :param aux: auxiliary needle
    """
    if disks == 1:
        print_move(disks, src, dest)
    else:
        towers_of_hanoi(disks - 1, src, aux, dest)
        print_move(disks, src, aux)
        towers_of_hanoi(disks - 1, aux, dest, src)


def print_move(disk, src, dest):
    """
    prints the move

    :param disk: the disk moved
    :param src: source needle
    :param dest: destination needle
    """
    print(f"Move disk {disk} from needle {src} to needle {dest}")


if __name__ == '__main__':
    n = int(input("Number of disks: "))

    if (n):
        towers_of_hanoi(n, 'A', 'C', 'B')
    else:
        print("At least 1 disk is required")
