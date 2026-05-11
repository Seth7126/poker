// ============================================================
// 函数名称: sub_40d57c
// 虚拟地址: 0x40d57c
// WARP GUID: 1d1f8586-0528-5b9a-b2ee-5c55af1545d6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40d55b
// ============================================================

int32_tsub_40d57c(void* arg1 @ ebp, int16_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t result
    int32_t result
    char* entry_ebx
    result.b = *entry_ebx
    result.b = result.b
    
    if (result.b != 0)
        goto label_40d58e
    
    result = *(arg1 - 0x24)
    
    if (result s> *(arg1 - 0x20))
        result.b = 0x30
    label_40d58e:
        
        if (*(arg1 - 0x24) != 0)
            *arg2 = result.b
            
            if (*(arg1 - 8) != 0)
                result = *(arg1 - 0x24)
                
                if (result s> 1)
                    uint8_t temp1_1 = modu.dp.b(result.w, 3)
                    result.b = divu.dp.b(result.w, 3)
                    result:1.b = temp1_1
                    
                    if (result:1.b == 1)
                        result.b = data_5314fa
                        *(arg2 + 1) = result.b
        else
            result:1.b = result.b
            result.b = data_5314fb
            *arg2 = result.w
    
    *(arg1 - 0x24) -= 1
    return result
}
