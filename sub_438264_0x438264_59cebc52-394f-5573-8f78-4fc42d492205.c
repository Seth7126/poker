// ============================================================
// 函数名称: sub_438264
// 虚拟地址: 0x438264
// WARP GUID: 59cebc52-394f-5573-8f78-4fc42d492205
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403420, sub_403430, sub_437bec, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_438264(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403430(arg1, arg2)
    int32_t ecx = sub_403430(arg1, arg2)
    void* eax = arg1[1]
    
    if (eax != 0)
        ecx = sub_437bec(eax, arg1)
    
    int32_t edx_1
    edx_1.b = arg2.b & 0xfc
    int32_t result = sub_4030c0(ecx, edx_1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
