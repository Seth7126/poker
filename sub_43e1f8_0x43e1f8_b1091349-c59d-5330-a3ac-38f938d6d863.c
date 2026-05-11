// ============================================================
// 函数名称: sub_43e1f8
// 虚拟地址: 0x43e1f8
// WARP GUID: b1091349-c59d-5330-a3ac-38f938d6d863
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4042c0, sub_403e4c, sub_404078
// [被调用的父级函数]: sub_43c480, sub_43e2f4
// ============================================================

int32_t __convention("regparm")sub_43e1f8(char* arg1, char** arg2)
{
    // 第一条实际指令: sub_403e4c(arg2, arg1)
    sub_403e4c(arg2, arg1)
    int32_t ebx_1 = 1
    int32_t result
    
    while (true)
        result = sub_404078(*arg2)
        
        if (ebx_1 s> result)
            break
        
        char* eax_1
        eax_1.b = (*arg2)[ebx_1 - 1]
        
        if (not(test_bit(*data_530a44, zx.d(eax_1.b))))
            *arg2
            
            if (eax_1.b == 0x26)
                int32_t eax_5
                
                if (*(data_530a80 + 8) != 0 && ebx_1 s> 1)
                    eax_5 = sub_404078(*arg2) - ebx_1
                
                if (*(data_530a80 + 8) == 0 || ebx_1 s<= 1 || eax_5 s< 2 || (*arg2)[ebx_1 - 2] != 0x28
                        || (*arg2)[ebx_1 + 1] != 0x29)
                    sub_4042c0(arg2, ebx_1, 1)
                else
                    sub_4042c0(arg2, ebx_1 - 1, 4)
        else
            ebx_1 += 1
        
        ebx_1 += 1
    
    return result
}
