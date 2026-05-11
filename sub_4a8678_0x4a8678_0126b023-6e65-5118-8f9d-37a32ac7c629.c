// ============================================================
// 函数名称: sub_4a8678
// 虚拟地址: 0x4a8678
// WARP GUID: 0126b023-6e65-5118-8f9d-37a32ac7c629
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a87b0, sub_412c38
// [被调用的父级函数]: sub_4b1304
// ============================================================

int32_t* __convention("regparm")sub_4a8678(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t* eax = *(arg1 + 0xa8)
    int32_t* result
    
    if (eax != 0)
        result = sub_412c38(eax)
    else
        arg2.b = 1
        int32_t ecx
        result = sub_4a87b0(ecx, arg2, &data_4a6c6c, 0, 0)
        *(arg1 + 0xa8) = result
    
    *(arg1 + 0xac) = esi
    return result
}
