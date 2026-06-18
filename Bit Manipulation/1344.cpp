// class Solution {
// public:
//     double angleClock(int hour, int minutes) {
//         double minAngle = double(6 * minutes);
//         double hrAngle = 30.0*hour + 0.5 * minutes;
//         double diff = abs(hrAngle - minAngle);
//         return min(diff,360-diff);
//     }
// };