// ============================================================
// 函数名称: sub_51ab0c
// 虚拟地址: 0x51ab0c
// WARP GUID: 448e0c09-08f0-58c4-9e28-c0e4c7a08728
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51aa14, sub_403010
// [被调用的父级函数]: sub_51aaa0
// ============================================================

void __fastcallsub_51ab0c(void* arg1, int32_t arg2, void* arg3 @ eax, char arg4)
{
    // 第一条实际指令: if (*(arg3 + 0x97a) != 0)
    if (*(arg3 + 0x97a) != 0)
        return 
    
    if (arg1 u< 2)
        *(arg3 + 0x96c) = arg2
        
        if (arg4 != 0)
            bool c_1 = unimplemented  {imul ecx, edi, 0xa}
            
            if (c_1)
                sub_403010()
                noreturn
            
            sub_51aa14(arg2 * 0xa, *(arg3 + 4))
    
    if (arg1 == 0 || arg1 == 3)
        *(arg3 + 0x970) = arg2
    
    if (arg1 == 0 || arg1 == 2)
        *(arg3 + 0x974) = arg2
}
