// ============================================================
// 函数名称: sub_4198d0
// 虚拟地址: 0x4198d0
// WARP GUID: 5a02a447-7ac9-50f7-8707-a22446d8d988
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ExtTextOutA
// [内部子函数调用]: sub_4199a0, sub_404078, sub_419c14, sub_40423c, sub_4198a4, sub_4197bc
// [被调用的父级函数]: sub_4b4f8c
// ============================================================

int32_t __fastcallsub_4198d0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t x = arg2
    (*(*arg3 + 0x10))()
    sub_419c14(arg3, 0xb)
    
    if (sub_4198a4(arg3) == 1)
        x += sub_4199a0(arg3, arg4) + 1
    
    uint32_t c = sub_404078(arg4)
    uint8_t* lpString = sub_40423c(arg4)
    ExtTextOutA(arg3[1], x, arg1, arg3[0x15], nullptr, lpString, c, nullptr)
    sub_4197bc(arg3, sub_4199a0(arg3, arg4) + x, arg1)
    return (*(*arg3 + 0xc))()
}
