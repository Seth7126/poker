// ============================================================
// 函数名称: sub_445a38
// 虚拟地址: 0x445a38
// WARP GUID: 08aabf12-1fbe-5340-b213-a0afb96f114c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyState
// [内部子函数调用]: sub_430df0, sub_431df4
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_445a38(void* arg1, void* arg2)
{
    // 第一条实际指令: int16_t eax
    int16_t eax
    int32_t ecx
    eax, ecx = GetKeyState(0x12)
    
    if (eax s>= 0)
        eax = *(arg2 + 4)
        
        if (eax == 9)
            if (GetKeyState(0x11) s>= 0)
                int16_t eax_3
                int32_t ecx_1
                eax_3, ecx_1 = GetKeyState(0x10)
                ecx_1.b = eax_3 s>= 0
                int32_t* eax_5 = sub_431df4(ecx_1, *(arg1 + 0x208), 1)
                *(arg2 + 0xc) = 1
                return eax_5
        else if (eax - 0x25 u< 4)
            void* eax_6 = *(arg1 + 0x208)
            
            if (eax_6 == 0)
                return eax_6
            
            int16_t edx = *(arg2 + 4)
            
            if (edx == 0x27 || edx == 0x28)
                ecx.b = 1
            else
                ecx = 0
            
            *(eax_6 + 0x24)
            int32_t* eax_8 = sub_431df4(ecx, eax_6, 0)
            *(arg2 + 0xc) = 1
            return eax_8
    
    return sub_430df0()
}
