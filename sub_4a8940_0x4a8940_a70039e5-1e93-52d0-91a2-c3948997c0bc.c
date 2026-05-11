// ============================================================
// 函数名称: sub_4a8940
// 虚拟地址: 0x4a8940
// WARP GUID: a70039e5-1e93-52d0-91a2-c3948997c0bc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4a8940(int16_t* arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: if (arg4 s> 0xffffffff)
    if (arg4 s> 0xffffffff)
        char ecx = 0
        
        if (arg4 s>= 0)
            int32_t i_1 = arg4 + 1
            int16_t* eax_1 = arg1
            int32_t i
            
            do
                if (arg2.w == *eax_1)
                    ecx = 1
                    break
                
                eax_1 = &eax_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (ecx == 0)
            (*(*arg3 + 0x64))()
    
    return arg2
}
