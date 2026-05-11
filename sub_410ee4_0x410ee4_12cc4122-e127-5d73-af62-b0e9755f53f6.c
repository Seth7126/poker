// ============================================================
// 函数名称: sub_410ee4
// 虚拟地址: 0x410ee4
// WARP GUID: 12cc4122-e127-5d73-af62-b0e9755f53f6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_4030d0, sub_410fe0, sub_403430, sub_410af0
// [被调用的父级函数]: sub_4adc84
// ============================================================

int32_t __convention("regparm")sub_410ee4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[3] = 1
    
    if (arg1[2] != 0)
        sub_410fe0(arg1)
    
    sub_4030d0(arg1[2])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_410af0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
