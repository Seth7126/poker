// ============================================================
// 函数名称: sub_42bb18
// 虚拟地址: 0x42bb18
// WARP GUID: 72a0a900-bee2-5866-b6e9-eaf2740f0f71
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IntersectRect, EqualRect
// [内部子函数调用]: sub_410524, sub_42b180, sub_410580
// [被调用的父级函数]: sub_42bba4
// ============================================================

BOOLsub_42bb18(void* arg1)
{
    // 第一条实际指令: char var_5 = 1
    char var_5 = 1
    int32_t* edi = *(*(*(arg1 - 4) + 0x24) + 0x134)
    BOOL i = sub_410580(edi, *(arg1 - 4))
    BOOL result
    
    while (i s> 0)
        i -= 1
        result = sub_410524(edi, i)
        
        if (*(result + 0x47) != 0 && (*(result + 0x40) & 0x40) != 0)
            void lprcSrc2
            sub_42b180(result, &lprcSrc2)
            RECT var_18
            IntersectRect(&var_18, arg1 - 0x14, &lprcSrc2)
            
            if (EqualRect(&var_18, arg1 - 0x14) != 0)
                goto label_42bb99
    
    var_5 = 0
    label_42bb99:
    result.b = var_5
    return result
}
