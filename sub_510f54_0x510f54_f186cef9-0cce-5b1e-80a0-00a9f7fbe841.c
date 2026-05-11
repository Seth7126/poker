// ============================================================
// 函数名称: sub_510f54
// 虚拟地址: 0x510f54
// WARP GUID: f186cef9-0cce-5b1e-80a0-00a9f7fbe841
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50a53c, sub_513f7c, sub_403010, sub_402d20
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_5223e8, sub_527454, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_510f54(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    
    if (*(arg1 + 0x1e0) == 0)
    label_510f9c:
        *(arg1 + 0x1b8) = *(*data_5301f4 + 0x20090)
        
        if (*(arg1 + 0x1b8) s> 1 && *(arg1 + 0x1b4) == 0)
            *(arg1 + 0x1b4) = 1
            *(arg1 + 0x1c0) = GetTickCount()
            *(arg1 + 0x1b5) = 0
            
            if (arg2 != 0)
                *(arg1 + 0x1c4) = arg2
            else
                *(arg1 + 0x1b5) = 1
                
                if (*(arg1 + 0x1b8) == 2)
                    *(arg1 + 0x1c4) = 0x3a98
                
                if (*(arg1 + 0x1b8) == 2 && *(*data_530304 + 0xcec) != 0)
                    int32_t eax_11 = sub_402d20(4) * 0xc8
                    bool o_1 = unimplemented  {imul eax, eax, 0xc8}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_11, 0))
                        sub_403010()
                        noreturn
                    
                    *(arg1 + 0x1c4) = eax_11
                
                if (*(arg1 + 0x1b8) == 3)
                    *(arg1 + 0x1c4) = 0x4e20
                
                if (*(arg1 + 0x1b8) == 3 && *(*data_530304 + 0xcec) != 0)
                    int32_t eax_16 = sub_402d20(4) * 0x190
                    bool o_3 = unimplemented  {imul eax, eax, 0x190}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_16, 0x190))
                        sub_403010()
                        noreturn
                    
                    *(arg1 + 0x1c4) = eax_16 + 0x190
                
                if (*(arg1 + 0x1b8) == 4)
                    *(arg1 + 0x1c4) = 0x7530
                
                if (*(arg1 + 0x1b8) == 4 && *(*data_530304 + 0xcec) != 0)
                    int32_t eax_21 = sub_402d20(4) * 0x3e8
                    bool o_5 = unimplemented  {imul eax, eax, 0x3e8}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (add_overflow(eax_21, 0x3e8))
                        sub_403010()
                        noreturn
                    
                    *(arg1 + 0x1c4) = eax_21 + 0x3e8
                
                if (*(arg1 + 0x1b8) == 5)
                    *(arg1 + 0x1c4) = 0xafc8
                
                if (*(arg1 + 0x1b8) == 6)
                    *(arg1 + 0x1c4) = 0xea60
                
                if (*(arg1 + 0x1b8) == 7)
                    *(arg1 + 0x1c4) = 0x1d4c0
            
            int32_t eax_23 = *(arg1 + 0x1b8)
            
            if (eax_23 == 2)
                *(arg1 + 0x1b8) = 1
            else if (eax_23 s< 6)
                *(arg1 + 0x1b8) = 0
            else
                *(arg1 + 0x1b8) = 0xffffffff
            
            if (arg2 == 0 && *(*data_5301f4 + 0xffec) != 5)
                int32_t var_14_1 = sub_50a53c(*(*data_5301f4 + 0x10020))
                *(arg1 + 0x1c4)
                sub_513f7c(arg1)
    else if (*(*data_5301f4 + 0x200a8) == 0 && *(*data_5301f4 + 0x10020) != 1)
        goto label_510f9c
    
    return entry_result
}
