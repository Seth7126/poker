// ============================================================
// 函数名称: sub_4b5160
// 虚拟地址: 0x4b5160
// WARP GUID: 231dc898-8555-51b0-88b1-b4910a985ca1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c05c, sub_402824, sub_4b5510, sub_4028f0, sub_402860
// [被调用的父级函数]: sub_4b526c
// ============================================================

int32_t __convention("regparm")sub_4b5160(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t esi_1
    result, esi_1 = sub_40c05c(arg2, arg1[0x8e])
    
    if (result == 0)
        return result
    
    if (sub_4b5510(arg1[0x8e]) != 0)
        sub_402824(sub_402860(arg1[0x8e]))
    
    sub_402824(sub_402860(esi_1))
    sub_4028f0(0, &arg1[0x8e])
    return (*(*arg1 + 0xc4))()
}
