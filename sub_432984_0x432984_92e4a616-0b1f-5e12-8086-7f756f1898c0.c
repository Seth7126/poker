// ============================================================
// 函数名称: sub_432984
// 虚拟地址: 0x432984
// WARP GUID: 92e4a616-0b1f-5e12-8086-7f756f1898c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_42aa4c, sub_403430, sub_428c40
// [被调用的父级函数]: sub_44b854
// ============================================================

int32_t __convention("regparm")sub_432984(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    
    if (arg1 == data_52e800)
        sub_428c40(nullptr)
    
    sub_4030d0(arg1[0x48])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_42aa4c(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
