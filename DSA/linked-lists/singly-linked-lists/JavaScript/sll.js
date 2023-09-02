/**
 * Singly Linked List Structure
 */
class Node_ {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class LList {
    constructor() {
        this.head = null;
        this.size = 0;
    }
    /**
     * Insert into linked list
     * @param {int} position position to insert data
     * @param {any} data value to insert
     */
    insert(position, data) {
        let node = new Node_(data);
        if (this.head == null || position == 0) {
            node.next = this.head;
            this.head = node;
        } else {
            let cur = this.head;
            let prev = this.head;
            let i = 0;
            while (cur && i < position) {
                prev = cur;
                cur = cur.next;
                i++;
            }
            prev.next = node;
            node.next = cur;
        }
        this.size++;
    }
    /**
     * insert data at the end of the list
     * @param {any} data value
     */
    append(data) {
        this.insert(this.size, data);
    }
    /**
     * print the values in a linked list
     * @returns null if empty
     */
    print_list() {
        let cur = this.head;
        if (cur == null) {
            console.log("Empty list!");
            return null;
        }
        while (cur) {
            console.log(cur.data);
            cur = cur.next;
        }
    }
    len() {
        console.log(this.size);
    }
    /**
     * reverse list
     */
    reverse_list() {
        let prev = null;
        let cur = this.head;

        while (cur) {
            let next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        this.head = prev;
    }
    remove(data) {
        if (this.head == null) {
            console.log("Error: List empty!");
            return;
        }
        let cur = this.head;
        let prev = this.head;

        while (cur) {
            if (cur.data == data) {
                this.size--;
                let remove_node = cur
                cur = null;
                if (cur == this.head)
                    this.head = this.head.next;
                else
                    prev.next = remove_node.next;
                return remove_node.data;
            }
            prev = cur;
            cur = cur.next;
        }
        if (cur == null) {
            console.log("(null) Element not found!");
            return;
        }
    }

    clear() {
        let cur = this.head;

        if (cur == null) {
            console.log("(null) already empty... nothing to be done");
            return;
        }
        while (cur) {
            let temp = cur.next;
            cur = null;
            cur = temp;
        }
        this.head = null;
    }
}

// let list = new LList();

// console.log("Generating odd numbers for linked list");
// for (let i = 0; i < 10; i++) {
//     list.append(i * 2 + 1);
// }
// console.log("Done...");
// console.log("Printing linked list values");
// list.print_list();
