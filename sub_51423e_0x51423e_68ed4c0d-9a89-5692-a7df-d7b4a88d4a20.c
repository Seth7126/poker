// ============================================================
// 函数名称: sub_51423e
// 虚拟地址: 0x51423e
// WARP GUID: 68ed4c0d-9a89-5692-a7df-d7b4a88d4a20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403898, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_51423e(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: sub_403898(__return_addr)
    sub_403898(__return_addr)
    int32_t eax_1 = *(arg1[-1] + 0x350)
    
    if (eax_1 s> 0 && eax_1 s<= 8)
        uint32_t eax_2 = GetTickCount()
        void* edx_1 = arg1[-1]
        *(edx_1 + 0x350)
        bool o_1 = unimplemented  {imul edx, dword [edx+0x350], 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(arg1[-1] + *(edx_1 + 0x350) * 0x3a4 + 0x350) = eax_2
    
    *arg1
    return 0
}
