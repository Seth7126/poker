// ============================================================
// 函数名称: sub_4449d8
// 虚拟地址: 0x4449d8
// WARP GUID: 29efd705-4b8b-592c-93b1-b009c4a2187c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4448d8
// [被调用的父级函数]: sub_431850
// ============================================================

char** __convention("regparm")sub_4449d8(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = *(arg1 + 0x216)
    char** result
    int32_t* edx
    int32_t* esi_1
    result, esi_1 = sub_4448d8(arg1, edx)
    
    if (ebx.b != 0)
        return result
    
    return (*(*esi_1 + 0xb0))()
}
