// ============================================================
// 函数名称: sub_4560cc
// 虚拟地址: 0x4560cc
// WARP GUID: 5b383d13-ee2e-54d0-9946-ad38cc5a786d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_456b70, sub_456194
// [被调用的父级函数]: sub_453ff8
// ============================================================

int32_t __convention("regparm")sub_4560cc(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[4] == 0xca)
    if (arg1[4] == 0xca)
        sub_456b70(arg1)
        
        if (arg1[0xf] != 0)
            arg1[4] = 0xcf
            return 1
        
        arg1[4] = 0xcb
    
    if (arg1[4] == 0xcb)
        if (*(*(arg1 + 0x1a6) + 0x10) != 0)
            while (true)
                if (arg1[2] != 0)
                    (*arg1[2])()
                
                int32_t eax_4 = (**(arg1 + 0x1a6))()
                
                if (eax_4 == 0)
                    return 0
                
                if (eax_4 == 2)
                    break
                
                if (arg1[2] != 0)
                    if (eax_4 != 3 && eax_4 != 1)
                        continue
                    
                    void* edx_4 = arg1[2]
                    *(edx_4 + 4) += 1
                    void* eax_7 = arg1[2]
                    
                    if (*(edx_4 + 4) s>= *(eax_7 + 8))
                        *(eax_7 + 8) += *(arg1 + 0x132)
        
        arg1[0x25] = arg1[0x23]
    else if (arg1[4] != 0xcc)
        void* eax_8 = *arg1
        *(eax_8 + 0x14) = 0x12
        *(eax_8 + 0x18) = arg1[4]
        (**arg1)()
    
    return sub_456194(arg1)
}
