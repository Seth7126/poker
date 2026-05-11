// ============================================================
// 函数名称: sub_4a86fc
// 虚拟地址: 0x4a86fc
// WARP GUID: a0cc7cd7-ea02-5ae7-ba5d-470a8f0c6b55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a8774, sub_4128c0, sub_4a80d4
// [被调用的父级函数]: sub_4a86b4, sub_4a80d4
// ============================================================

int32_t __convention("regparm")sub_4a86fc(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: int32_t result = sub_4128c0(arg1[0x2a])
    int32_t result = sub_4128c0(arg1[0x2a])
    
    if (result s<= 0)
        return result
    
    if (arg2 != 0xffffffff && arg2 s<= sub_4128c0(arg1[0x2a]))
        return (*(**(sub_4a80d4(arg1, *(arg1[0x2a] + 4), arg2, 1) + 0xa8) + 0x18))()
    
    int32_t* esi_1 = arg1[0x2a]
    struct _EXCEPTION_REGISTRATION_RECORD* eax_4 = sub_4128c0(esi_1)
    return sub_4a8774(sub_4a80d4(arg1, esi_1[1], eax_4, 1))
}
