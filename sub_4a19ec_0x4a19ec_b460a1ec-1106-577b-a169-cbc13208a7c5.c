// ============================================================
// 函数名称: sub_4a19ec
// 虚拟地址: 0x4a19ec
// WARP GUID: b460a1ec-1106-577b-a169-cbc13208a7c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_410af0, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a19ec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_40cc98(&arg1[2])
    sub_40cc98(&arg1[0xb])
    int32_t edx
    edx.b = arg2.b & 0xfc
    int32_t result = sub_410af0(arg1, edx)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
