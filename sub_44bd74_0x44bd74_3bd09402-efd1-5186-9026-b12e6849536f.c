// ============================================================
// 函数名称: sub_44bd74
// 虚拟地址: 0x44bd74
// WARP GUID: 3bd09402-efd1-5186-9026-b12e6849536f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41bffc, sub_41bfe4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44bd74(void* arg1, void** arg2, int32_t* arg3)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t result
    result.b = 1
    
    if ((*(esi + 0x20) & 0x10) == 0)
    label_44bda4:
        arg1.b = *(esi + 0x4b)
        
        if (arg1.b == 0)
            *arg2 = sub_41bfe4(*(esi + 0x128))
        else
            arg1.b -= 3
            char temp0_1 = arg1.b
            arg1.b -= 2
            
            if (temp0_1 u< 2)
                *arg2 = sub_41bfe4(*(esi + 0x128))
        
        arg1.b = *(esi + 0x4b)
        char temp1_1 = arg1.b
        arg1.b -= 3
        
        if (temp1_1 u< 3)
            *arg3 = sub_41bffc(*(esi + 0x128))
    else if (sub_41bfe4(*(esi + 0x128)) s> 0 && sub_41bffc(*(esi + 0x128)) s> 0)
        goto label_44bda4
    
    return result
}
