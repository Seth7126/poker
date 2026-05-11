// ============================================================
// 函数名称: sub_40d0e6
// 虚拟地址: 0x40d0e6
// WARP GUID: c707d472-4e63-522e-a6b9-426e96e377f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d17c, sub_40d0dc
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40d0e6(void* arg1 @ ebp, char* arg2 @ esi, char* arg3 @ edi)
{
    // 第一条实际指令: sub_40d0dc(arg1, arg3)
    sub_40d0dc(arg1, arg3)
    int32_t count_1 = sx.d(*(arg1 - 0x1c))
    int32_t edx = 0
    int16_t result
    int32_t count
    
    if (count_1 s> *(arg1 + 0xc) || count_1 s< 0xfffffffd)
        count = 1
        edx = 1
    label_40d11b:
        
        while (true)
            result.b = *arg2
            arg2 = &arg2[1]
            result.b = result.b
            
            if (result.b == 0)
                result.b = 0x30
                arg3 = __builtin_memset(arg3, 0x30, count)
                break
            
            *arg3 = result.b
            arg3 = &arg3[1]
            count -= 1
            
            if (count == 0)
                result.b = *arg2
                arg2 = &arg2[1]
                result.b = result.b
                
                if (result.b == 0)
                    goto label_40d13d
                
                result:1.b = result.b
                result.b = data_5314fb
                *arg3 = result
                arg3 = &arg3[2]
                goto label_40d131
        
    label_40d13d:
        
        if (edx != 0)
            int32_t ebx
            ebx.b = *(arg1 - 0x19)
            return sub_40d17c(0x45, sx.d(*(arg1 - 0x1c)) - 1, 0, arg3) __tailcall
    else
        count = count_1
        
        if (count s> 0)
            goto label_40d11b
        
        result.b = 0x30
        *arg3 = 0x30
        void* edi = &arg3[1]
        
        if (*arg2 != 0)
            result.b = data_5314fb
            *edi = result.b
            result.b = 0x30
            arg3 = __builtin_memset(edi + 1, 0x30, neg.d(count))
        label_40d131:
            
            while (true)
                result.b = *arg2
                arg2 = &arg2[1]
                result.b = result.b
                
                if (result.b == 0)
                    break
                
                *arg3 = result.b
                arg3 = &arg3[1]
            
            goto label_40d13d
    return result
}
