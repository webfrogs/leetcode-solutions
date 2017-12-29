//: Playground - noun: a place where people can play

import Foundation

public class ListNode {
    public var val: Int
    public var next: ListNode?
    public init(_ val: Int) {
        self.val = val
        self.next = nil
    }
}

class Solution {
    func addTwoNumbers(_ l1: ListNode?, _ l2: ListNode?) -> ListNode? {
        var result: ListNode? = nil

        var firstNode = l1
        var secondNode = l2
        var carryFlag = false
        var currentNode: ListNode? = nil
        while true {
            if firstNode == nil && secondNode == nil && !carryFlag {
                break
            }

            let firstNum = firstNode?.val ?? 0
            let secondNum = secondNode?.val ?? 0

            let addResult = firstNum + secondNum + (carryFlag ? 1:0)

            let newNode: ListNode
            if addResult >= 10 {
                carryFlag = true
                newNode = ListNode(addResult % 10)
            } else {
                carryFlag = false
                newNode = ListNode(addResult)
            }

            if currentNode == nil {
                currentNode = newNode
                result = currentNode
            } else {
                currentNode?.next = newNode
                currentNode = newNode
            }

            firstNode = firstNode?.next
            secondNode = secondNode?.next
        }
        return result
    }
}



