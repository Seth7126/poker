// ============================================================
// 函数名称: sub_406168
// 虚拟地址: 0x406168
// WARP GUID: 28797176-4f10-55b9-bc03-5cd0dd2c63ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40605c
// [被调用的父级函数]: sub_5197fb, sub_51d840, sub_519804
// ============================================================

int32_t __convention("regparm")sub_406168(void* arg1)
{
    // 第一条实际指令: char result
    char result
    
    while (true)
        result = sub_40605c(arg1)
        
        if (result == 0x1a)
            break
        
        if (result == 0xd)
            result = sub_40605c(arg1)
            
            if (result == 0xa)
                return result
            
            if (result == 0x1a)
                break
            
            *(arg1 + 0xc) -= 1
            return result
    
    return result
}
