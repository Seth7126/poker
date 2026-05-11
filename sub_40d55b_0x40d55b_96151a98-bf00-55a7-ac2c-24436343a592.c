// ============================================================
// 函数名称: sub_40d55b
// 虚拟地址: 0x40d55b
// WARP GUID: 96151a98-bf00-55a7-ac2c-24436343a592
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d57c
// [被调用的父级函数]: sub_40d4a0
// ============================================================

int32_tsub_40d55b(void* arg1 @ ebp, int16_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t temp3 = *(arg1 - 0x28)
    int32_t temp3 = *(arg1 - 0x28)
    
    if (temp3 == 0)
        return sub_40d57c(arg1, arg2) __tailcall
    
    if (temp3 s>= 0)
        int32_t i
        
        do
            sub_40d57c(arg1, arg2)
            i = *(arg1 - 0x28)
            *(arg1 - 0x28) -= 1
        while (i != 1)
        return sub_40d57c(arg1, arg2) __tailcall
    
    *(arg1 - 0x28) += 1
    int32_t result = *(arg1 - 0x24)
    
    if (result s<= *(arg1 - 0x1c))
        result.b = 0x30
        
        if (*(arg1 - 0x24) != 0)
            *arg2 = 0x30
            
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
            result:1.b = 0x30
            result.b = data_5314fb
            *arg2 = result.w
    
    *(arg1 - 0x24) -= 1
    return result
}
