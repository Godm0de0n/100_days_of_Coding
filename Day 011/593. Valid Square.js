/**
 * @param {number[]} p1
 * @param {number[]} p2
 * @param {number[]} p3
 * @param {number[]} p4
 * @return {boolean}
 */
var cal = function(p1, p2) {
    return Math.pow((p1[0] - p2[0]), 2) + Math.pow((p1[1] - p2[1]), 2);
  };
  
  var validSquare = function(p1, p2, p3, p4) {
    var l1 = cal(p1, p2);
    var l2 = cal(p2, p3);
    var l3 = cal(p3, p4);
    var l4 = cal(p4, p1);
    var d1 = cal(p1, p3);
    var d2 = cal(p2, p4);
    var s = new Set();
    s.add(l1);
    s.add(l2);
    s.add(l3);
    s.add(l4);
    s.add(d1);
    s.add(d2);
  
    if (l1 === 0 || l2 === 0 || l3 === 0 || l4 === 0 || d1 === 0 || d2 === 0) {
      return false;
    }
  
    if (s.size === 2) {
      return true;
    } else {
      return false;
    }
  };
  