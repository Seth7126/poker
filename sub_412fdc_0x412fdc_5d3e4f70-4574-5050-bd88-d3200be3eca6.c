// ============================================================
// 函数名称: sub_412fdc
// 虚拟地址: 0x412fdc
// WARP GUID: 5d3e4f70-4574-5050-bd88-d3200be3eca6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeResource
// [内部子函数调用]: sub_403430, sub_403420, sub_4030c0, sub_4077b0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412fdc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    arg1[5]
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(FreeResource(arg1[5]), edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
