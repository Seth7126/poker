// ============================================================
// 函数名称: sub_4192d0
// 虚拟地址: 0x4192d0
// WARP GUID: 6749faf0-584e-5d76-811d-16b53155be84
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteCriticalSection
// [内部子函数调用]: sub_403420, sub_4030d0, sub_403430, sub_419bc0, sub_410af0, sub_4108f8
// [被调用的父级函数]: sub_41ce88, sub_42a404
// ============================================================

int32_t __convention("regparm")sub_4192d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    sub_403430(arg1, edx)
    int32_t ebx_1 = sub_4108f8(data_5316ac)
    sub_419bc0(arg1, 0)
    sub_4030d0(arg1[3])
    sub_4030d0(arg1[4])
    sub_4030d0(arg1[5])
    DeleteCriticalSection(&arg1[0xe])
    int32_t edx_2
    edx_2.b = ebx_1.b & 0xfc
    int32_t result = sub_410af0(arg1, edx_2)
    
    if (ebx_1.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
