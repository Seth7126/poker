// ============================================================
// 函数名称: sub_405114
// 虚拟地址: 0x405114
// WARP GUID: 05426f47-0bba-5eb9-8fcf-ed4b14b8e77b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4067e4, sub_402b0c
// [被调用的父级函数]: sub_408ed4
// ============================================================

char* __convention("regparm")sub_405114(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    int32_t ebp = 1
    char* result = nullptr
    int32_t var_18 = 0
    
    if (esi != 0)
        while (esi[ebp - 1] == 0x20)
            ebp += 1
        
        char var_14_1 = 0
        arg1.b = esi[ebp - 1]
        
        if (arg1.b == 0x2d)
            var_14_1 = 1
            ebp += 1
        else if (arg1.b == 0x2b)
            ebp += 1
        
        int32_t ebx
        ebx.b = 1
        
        if (esi[ebp - 1] != 0x24 && esi[ebp - 1] == 0x30)
            arg1.b = esi[ebp]
            arg1 = sub_402b0c(arg1.b)
        
        if (esi[ebp - 1] != 0x24 && (esi[ebp - 1] != 0x30 || arg1.b != 0x58))
            while (true)
                arg1.b = esi[ebp - 1]
                
                if (arg1.b - 0x30 u>= 0xa)
                    break
                
                if (var_18 != 0)
                    if (var_18 s< 0)
                        break
                else if (result u< 0)
                    break
                
                if (var_18 != 0xccccccc)
                    if (var_18 s> 0xccccccc)
                        break
                else if (result u> 0xcccccccc)
                    break
                
                int32_t eax_7
                int32_t ecx
                int32_t edx_10
                eax_7, ecx, edx_10 = sub_4067e4(ecx, var_18, result, 0xa, 0)
                void* eax_9
                int32_t edx_11
                edx_11:eax_9 = sx.q(zx.d(arg1.b) - 0x30)
                result = eax_9 + eax_7
                var_18 = adc.d(edx_11, edx_10, eax_9 + eax_7 u< eax_9)
                ebp += 1
                ebx = 0
            
            if (var_14_1 != 0)
                int32_t edx_15 = neg.d(adc.d(var_18, 0, result != 0))
                result = neg.d(result)
                var_18 = edx_15
            
            bool cond:2_1 = var_18 == 0
            
            if (var_18 == 0)
                cond:2_1 = result == 0
            
            if (not(cond:2_1))
                if (var_18 != 0)
                    arg1.b = var_18 s< 0
                else
                    arg1.b = result u< 0
                
                if (arg1.b != var_14_1)
                    ebp -= 1
        else
            if (esi[ebp - 1] == 0x30)
                ebp += 1
            
            ebp += 1
            
            while (true)
                arg1.b = esi[ebp - 1]
                int32_t edi_3
                
                if (arg1.b - 0x30 u< 0xa)
                    edi_3 = zx.d(arg1.b) - 0x30
                else if (arg1.b - 0x41 u< 6)
                    edi_3 = zx.d(arg1.b) - 0x37
                else
                    if (arg1.b - 0x61 u>= 6)
                        break
                    
                    edi_3 = zx.d(arg1.b) - 0x57
                
                if (var_18 != 0)
                    if (var_18 s< 0)
                        break
                else if (result u< 0)
                    break
                
                if (var_18 != 0xfffffff)
                    if (var_18 s> 0xfffffff)
                        break
                else if (result u> 0xffffffff)
                    break
                
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(edi_3)
                int32_t eax_4 = result << 4
                int32_t edx_4 =
                    adc.d(var_18 << 4 | result u>> 0xffffffe4, edx_1, eax_4 + eax_2 u< eax_4)
                result = eax_4 + eax_2
                var_18 = edx_4
                ebp += 1
                ebx = 0
            
            if (var_14_1 != 0)
                int32_t edx_7 = neg.d(adc.d(var_18, 0, result != 0))
                result = neg.d(result)
                var_18 = edx_7
        
        arg1.b = esi[ebp - 1] != 0
        ebx.b |= arg1.b
        
        if (ebx.b == 0)
            *arg2 = 0
        else
            *arg2 = ebp
    else
        *arg2 = 1
    
    return result
}
