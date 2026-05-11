// ============================================================
// 函数名称: sub_40d3ba
// 虚拟地址: 0x40d3ba
// WARP GUID: 0fa61125-0891-5633-9994-8ff4e5faba93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_40d3ba(int32_t arg1, void* arg2 @ ebp)
{
    // 第一条实际指令: char* esi = *(arg2 + 8)
    char* esi = *(arg2 + 8)
    int16_t result
    
    if (arg1 == 0)
    label_40d3df:
        result.b = **(arg2 + 8)
        result.b = result.b
    else
        while (true)
            result.b = *esi
            esi = &esi[1]
            
            if (result.b != 0x27 && result.b != 0x22)
                result.b = result.b
                
                if (result.b == 0)
                    goto label_40d3df
                
                if (result.b != 0x3b)
                    continue
                else
                    arg1 -= 1
                    
                    if (arg1 == 0)
                        break
                    
                    continue
            
            result:1.b = result.b
            
            while (true)
                result.b = *esi
                esi = &esi[1]
                
                if (result.b == result:1.b)
                    break
                
                result.b = result.b
                
                if (result.b == 0)
                    goto label_40d3df
        
        result.b = *esi
        result.b = result.b
        
        if (result.b == 0 || result.b == 0x3b)
            goto label_40d3df
    
    return result
}
