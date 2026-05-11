// ============================================================
// 函数名称: sub_45cbd4
// 虚拟地址: 0x45cbd4
// WARP GUID: 569b8e7d-9347-52ce-ba43-b97883daa674
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4533f4
// [被调用的父级函数]: sub_456790
// ============================================================

int32_t (__convention("regparm")** __convention("regparm")sub_45cbd4(void* arg1, int32_t arg2, int32_t arg3))(int32_t* arg1)
{
    // 第一条实际指令: int32_t (__convention("regparm")** result)(int32_t* arg1) = (**(arg1 + 4))(arg3)
    int32_t (__convention("regparm")** result)(int32_t* arg1) = (**(arg1 + 4))(arg3)
    *(arg1 + 0x1b2) = result
    *result = sub_45c964
    void* edi = &result[0xb]
    int32_t i = 0
    void* ebx_1 = *(arg1 + 0xd4)
    
    while (i s< *(arg1 + 0x20))
        *(ebx_1 + 0x50) = (**(arg1 + 4))(i)
        result = sub_4533f4(*(ebx_1 + 0x50), 0, 0x100)
        *edi = 0xffffffff
        edi += 4
        i += 1
        ebx_1 += 0x54
    
    return result
}
