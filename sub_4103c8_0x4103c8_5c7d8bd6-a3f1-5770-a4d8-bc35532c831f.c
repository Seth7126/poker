// ============================================================
// 函数名称: sub_4103c8
// 虚拟地址: 0x4103c8
// WARP GUID: 5c7d8bd6-a3f1-5770-a4d8-bc35532c831f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42a430, sub_4483cc, sub_4966ec, sub_441c2c, sub_414da8, sub_4132b4, sub_42e4a4, sub_41b890, sub_42e3d0, sub_42b01c, sub_4479e8, sub_410138, sub_442994, sub_413f0c, sub_446f98, sub_414868, sub_431c90, sub_420128, sub_42a224, sub_41085c, sub_415e8c, sub_428d48, sub_437c30, sub_41327c, sub_447294, sub_416718, sub_42968c, sub_415df8, sub_449258, sub_4aa948, sub_43de70, sub_4a3d84, sub_42e078, sub_41b614, sub_49be1c, sub_4367ac, sub_496630, sub_411380, sub_40fcf8
// ============================================================

int32_t __convention("regparm")sub_4103c8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg1[2]
    int32_t result = arg1[2]
    
    if (result == arg1[3])
        (**arg1)()
    
    *(arg1[1] + (result << 2)) = arg2
    arg1[2] += 1
    
    if (arg2 != 0)
        (*(*arg1 + 4))()
    
    return result
}
