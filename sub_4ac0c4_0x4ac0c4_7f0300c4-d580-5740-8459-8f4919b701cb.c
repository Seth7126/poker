// ============================================================
// 函数名称: sub_4ac0c4
// 虚拟地址: 0x4ac0c4
// WARP GUID: 7f0300c4-d580-5740-8459-8f4919b701cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403430, sub_403420, sub_4030c0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ac0c4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403430(arg1, arg2)
    int32_t ecx = sub_403430(arg1, arg2)
    int32_t ebx = arg2
    int32_t* esi = arg1[2]
    
    if (esi != 0)
        arg2.b = 1
        arg2, ecx = (*(*esi - 4))()
    
    int32_t* esi_1 = arg1[3]
    
    if (esi_1 != 0)
        arg2.b = 1
        ecx = (*(*esi_1 - 4))()
    
    int32_t edx
    edx.b = ebx.b & 0xfc
    int32_t result = sub_4030c0(ecx, edx)
    
    if (ebx.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
