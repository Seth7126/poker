// ============================================================
// 函数名称: sub_433ecc
// 虚拟地址: 0x433ecc
// WARP GUID: 855d9138-5979-5311-8b2f-deab1e416191
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433528
// [被调用的父级函数]: sub_433b34
// ============================================================

void* __fastcallsub_433ecc(void* arg1, void* arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        arg1 = *(*(arg3 + 0x64) + 8)
        
        if (arg4 != 0)
            while (true)
                void* eax_1 = *(arg1 + 0xc)
                
                if (eax_1 == 0)
                    break
                
                arg1 = eax_1
    
    if (arg4 == 0)
        *(arg2 + 0xc) = arg1
        void* eax_4 = *(arg1 + 0x18)
        *(arg2 + 0x18) = eax_4
        
        if (eax_4 != 0)
            *(eax_4 + 0xc) = arg2
        
        *(arg1 + 0x18) = arg2
        void* eax_5 = *(arg1 + 0x14)
        *(arg2 + 0x14) = eax_5
        
        if (arg1 == *(eax_5 + 8))
            *(eax_5 + 8) = arg2
    else
        *(arg2 + 0x14) = *(arg1 + 0x14)
        *(arg2 + 0x18) = arg1
        void* eax_3 = *(arg1 + 0xc)
        *(arg2 + 0xc) = eax_3
        
        if (eax_3 != 0)
            *(eax_3 + 0x18) = arg2
        
        *(arg1 + 0xc) = arg2
    
    return sub_433528(*(arg1 + 0x14))
}
