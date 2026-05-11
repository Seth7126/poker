// ============================================================
// 函数名称: sub_45b3ac
// 虚拟地址: 0x45b3ac
// WARP GUID: 4bd88bb5-c674-5536-bbaa-8371915e7331
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45b208, sub_45b10c
// [被调用的父级函数]: sub_45b2cc
// ============================================================

void __fastcallsub_45b3ac(int32_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* esi = arg3
    void* esi = arg3
    void* ebx = *(esi + 0x19a)
    
    if (*(ebx + 0x30) != 0)
        goto label_45b3ed
    
    *(ebx + (*(ebx + 0x40) << 2) + 0x38)
    
    if ((*(*(esi + 0x19e) + 0xc))() == 0)
        return 
    
    *(ebx + 0x30) = 1
    *(ebx + 0x4c) += 1
    label_45b3ed:
    int32_t edx_1 = *(ebx + 0x44)
    
    if (edx_1 u< 1)
    label_45b444:
        *(ebx + 0x34) = 0
        *(ebx + 0x48) = *(esi + 0x12e) - 1
        
        if (*(ebx + 0x4c) == *(esi + 0x132))
            sub_45b208(esi)
        
        *(ebx + 0x44) = 1
        goto label_45b480
    
    if (edx_1 == 1)
    label_45b480:
        *(ebx + (*(ebx + 0x40) << 2) + 0x38)
        (*(*(esi + 0x1a2) + 4))(arg4, arg1, arg2, *(ebx + 0x48))
        
        if (*(ebx + 0x34) u>= *(ebx + 0x48))
            if (*(ebx + 0x4c) == 1)
                sub_45b10c(esi)
            
            *(ebx + 0x40) ^= 1
            *(ebx + 0x30) = 0
            *(ebx + 0x34) = *(esi + 0x12e) + 1
            *(ebx + 0x48) = *(esi + 0x12e) + 2
            *(ebx + 0x44) = 2
    else if (edx_1 == 2)
        *(ebx + (*(ebx + 0x40) << 2) + 0x38)
        (*(*(esi + 0x1a2) + 4))(arg4, arg1, arg2, *(ebx + 0x48))
        
        if (*(ebx + 0x34) u>= *(ebx + 0x48))
            *(ebx + 0x44) = 0
            
            if (*arg1 u< arg4)
                goto label_45b444
}
